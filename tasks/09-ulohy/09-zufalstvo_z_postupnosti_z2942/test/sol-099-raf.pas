program uloha2;
var t,n,i,j,x,x_past,d,d2,q_cit,q_men,q2_cit,q2_men:longint;
    is_arit,is_geom:boolean;

function gcd(a, b:longint):longint;
var t:longint;
begin
  if a<0 then a:=a*-1; if b<0 then b:=b*-1;
  while b <> 0 do
  begin
    t := b; b := a mod b; a := t;
  end;
  gcd := a;
end;

procedure vypis (is_arit,is_geom:boolean);
  begin
    if (is_arit) then writeln('ano')
    else writeln('nie');
    if (is_geom) then writeln('ano')
    else writeln('nie');
  end;

procedure spracuj_q(var qx_cit,qx_men,x2,x2_past:longint);
{q si ukladame ako vykrateny zlomok kvoli presnosti}
  begin
    if (x2=0) then begin
    {treba osetrit, ak jedno z cisel je 0
    aj ked to neni kosher 0/0 = 0 pre potreby ulohy :P}
        qx_cit:=0; qx_men:=1;
    end
    else if (x2_past=0) then begin
        qx_cit:=1; qx_men:=0;
    end
    else begin
        qx_cit:=x2 div gcd(x2,x2_past);
        qx_men:=x2_past div gcd(x2,x2_past);
    end;
    if ((qx_cit > 0) and (qx_men < 0)) or ((qx_cit < 0) and (qx_men < 0)) then begin
      qx_cit *= -1;
      qx_men *= -1;
    end;
  end;

begin
  t:=1;
  for i:=1 to t do begin
    readln(n); read(x_past,x); {nacitame prve 2 cleny}
    is_arit:=true; is_geom:=true;
    d:=x-x_past;
    spracuj_q(q_cit,q_men,x,x_past);
    for j:=3 to n do begin
      x_past:=x; read(x);
      d2:=x-x_past;
      if d2<>d then is_arit:=false;
      d:=d2;
      spracuj_q(q2_cit,q2_men,x,x_past);
      if ((q2_cit<>q_cit)or(q2_men<>q_men)) then is_geom:=false;
      q_cit:=q2_cit; q_men:=q2_men;
    end;
    vypis(is_arit,is_geom);
  end;
end.


