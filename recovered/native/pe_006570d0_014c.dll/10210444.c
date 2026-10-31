/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10210444 */

int __fastcall FUN_10210444(uint *param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  
  if (*param_1 <= param_2) {
    iVar2 = FUN_102101f2(param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    *param_1 = param_2 + 1;
  }
  pbVar1 = (byte *)(param_1[2] + (param_2 >> 3));
  *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)param_2 & 7));
  return 0;
}

