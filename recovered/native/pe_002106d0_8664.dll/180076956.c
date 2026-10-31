/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076956 */

bool FUN_180076956(undefined8 param_1,char *param_2,byte *param_3,byte *param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  *param_5 = (longlong)param_3;
  *param_8 = param_6;
  pbVar7 = (byte *)*param_5;
  if ((pbVar7 != param_4) && (param_6 != param_7)) {
    do {
      bVar1 = *pbVar7;
      uVar3 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xc0) {
          *param_5 = (longlong)(pbVar7 + 1);
          return (bool)2;
        }
        uVar3 = (uint)bVar1;
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
        uVar6 = (ulonglong)(iVar4 + 1);
        if ((longlong)param_4 - (longlong)pbVar7 < (longlong)uVar6) break;
        *param_5 = (longlong)(pbVar7 + 1);
        pbVar7 = pbVar7 + 2;
        do {
          if (-0x41 < (char)pbVar7[-1]) {
            return (bool)2;
          }
          uVar3 = pbVar7[-1] & 0x3f | uVar3 << 6;
          *param_5 = (longlong)pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (1 < (int)uVar5);
      }
      else {
        *param_5 = (longlong)(pbVar7 + 1);
      }
      if (*param_2 == '\0') {
        *param_2 = '\x01';
      }
      if (0x10ffff < uVar3) {
        return (bool)2;
      }
      puVar2 = (undefined2 *)*param_8;
      *param_8 = (longlong)(puVar2 + 1);
      *puVar2 = (short)uVar3;
      pbVar7 = (byte *)*param_5;
      if ((pbVar7 == param_4) || (*param_8 == param_7)) break;
    } while( true );
  }
  return param_3 == pbVar7;
}

