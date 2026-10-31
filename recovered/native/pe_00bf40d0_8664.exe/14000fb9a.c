/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000fb9a */

void FUN_14000fb9a(longlong *param_1,ushort *param_2,ushort *param_3,uint *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  uVar2 = *param_2;
  *param_4 = (uint)uVar2;
  if (uVar2 < 0xd800) {
LAB_14000fbab:
    param_3 = param_2 + 1;
  }
  else {
    if (0xdbff < uVar2) {
      if (uVar2 < 0xe000) {
        *param_4 = 0xfffd;
        param_3 = param_2 + 1;
        uVar3 = 0;
        goto LAB_14000fbb4;
      }
      goto LAB_14000fbab;
    }
    puVar1 = param_2 + 1;
    if (puVar1 == param_3) {
      *param_4 = 0xfffd;
      uVar3 = 0;
      goto LAB_14000fbb4;
    }
    if ((ushort)(*puVar1 + 0x2000) < 0xfc00) {
      *param_4 = 0xfffd;
      uVar3 = 0;
      param_3 = puVar1;
      goto LAB_14000fbb4;
    }
    *param_4 = (uint)uVar2 * 0x400 + 0xfca00000;
    *param_4 = (uint)uVar2 * 0x400 + (uint)param_2[1] + 0xfca02400;
    param_3 = param_2 + 2;
  }
  uVar3 = 1;
LAB_14000fbb4:
  *param_1 = (longlong)param_3;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}

