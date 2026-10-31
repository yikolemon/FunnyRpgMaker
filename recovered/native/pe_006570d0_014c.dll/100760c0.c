/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100760c0 */

bool FUN_100760c0(char *param_1,byte *param_2,byte *param_3,int *param_4,int param_5,int param_6,
                 int *param_7)

{
  byte bVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  *param_4 = (int)param_2;
  *param_7 = param_5;
  pbVar5 = (byte *)*param_4;
  if ((pbVar5 != param_3) && (param_5 != param_6)) {
    do {
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xc0) {
          *param_4 = (int)(pbVar5 + 1);
          return (bool)2;
        }
        if (bVar1 < 0xe0) {
          uVar3 = uVar3 & 0x1f;
          iVar4 = 1;
        }
        else if (bVar1 < 0xf0) {
          uVar3 = uVar3 & 0xf;
          iVar4 = 2;
        }
        else if (bVar1 < 0xf8) {
          uVar3 = uVar3 & 7;
          iVar4 = 3;
        }
        else {
          uVar3 = uVar3 & 3;
          iVar4 = 5 - (uint)(bVar1 < 0xfc);
        }
        if ((int)param_3 - (int)pbVar5 <= iVar4) break;
        *param_4 = (int)(pbVar5 + 1);
        pbVar5 = pbVar5 + 2;
        iVar4 = iVar4 + 1;
        do {
          if (-0x41 < (char)pbVar5[-1]) {
            return (bool)2;
          }
          uVar3 = pbVar5[-1] & 0x3f | uVar3 << 6;
          *param_4 = (int)pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (1 < iVar4);
      }
      else {
        *param_4 = (int)(pbVar5 + 1);
      }
      if (*param_1 == '\0') {
        *param_1 = '\x01';
      }
      if (0x10ffff < uVar3) {
        return (bool)2;
      }
      puVar2 = (undefined2 *)*param_7;
      *param_7 = (int)(puVar2 + 1);
      *puVar2 = (short)uVar3;
      pbVar5 = (byte *)*param_4;
      if ((pbVar5 == param_3) || (*param_7 == param_6)) break;
    } while( true );
  }
  return param_2 == pbVar5;
}

