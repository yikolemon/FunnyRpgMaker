/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005c88e */

void FUN_14005c88e(longlong *param_1,ushort *param_2,ushort *param_3,uint *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  uVar2 = *param_2;
  *param_4 = (uint)uVar2;
  if (uVar2 < 0xd800) {
LAB_14005c89f:
    param_3 = param_2 + 1;
  }
  else {
    if (0xdbff < uVar2) {
      if (uVar2 < 0xe000) {
        *param_4 = 0xfffd;
        param_3 = param_2 + 1;
        uVar3 = 0;
        goto LAB_14005c8a8;
      }
      goto LAB_14005c89f;
    }
    puVar1 = param_2 + 1;
    if (puVar1 == param_3) {
      *param_4 = 0xfffd;
      uVar3 = 0;
      goto LAB_14005c8a8;
    }
    if ((ushort)(*puVar1 + 0x2000) < 0xfc00) {
      *param_4 = 0xfffd;
      uVar3 = 0;
      param_3 = puVar1;
      goto LAB_14005c8a8;
    }
    *param_4 = (uint)uVar2 * 0x400 + 0xfca00000;
    *param_4 = (uint)uVar2 * 0x400 + (uint)param_2[1] + 0xfca02400;
    param_3 = param_2 + 2;
  }
  uVar3 = 1;
LAB_14005c8a8:
  *param_1 = (longlong)param_3;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}

