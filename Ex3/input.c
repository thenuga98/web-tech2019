#define c 50
SWITCH (state) {
CASE 0 : c = nextchar();
If (c == '<' ) state = 1;
else if (c == '=' ) state = 5;
else if (c == '>') state = 6;
else fail ();
BREAK;
}
while (c != eof)
{
If (c == 1 ) return “yes”;
else return “no”;
}

break
switch
