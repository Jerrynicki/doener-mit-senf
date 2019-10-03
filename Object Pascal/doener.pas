unit doener;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils;

procedure mit(senf: string);

implementation

procedure mit(senf: string);
begin
  if (senf = 'senf') then
    WriteLn('döner mit senf')
end;

end.

