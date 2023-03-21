#include <stdio.h>
int main()
{
    char str[] = "ED.GDAD.DLEB.COCC.CV.FS.HQ.JN.MP.Go.Cr.Cq.Cp.Fk.Jf.J`.I`.H`ID.J^HE.K^FG.N[ABCG.L`CG.MTBT.MUCS.NTDBCBAJ.NUBBHI.OTMI.OROI.OGDCSI.PE[I.RC[I.rBDB.rB.sB.tB";
    int c, i, j;
    for(i = 0, j = 0; str[i] != '\0'; i++, j++)
    {
        c = str[i]-64;
        if(str[i] == 46 && ++j) putchar(10);
        else if(j % 2 == 0)
            while(c-- != 0) putchar(32);
        else
            while(c-- != 0) putchar(124);
    }
}
