/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004640d */

undefined8 FUN_1004640d(ushort *param_1,ushort *param_2,uint *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  *param_3 = uVar3;
  if (uVar3 < 0xd800) {
LAB_10046424:
    param_2 = param_1 + 1;
  }
  else {
    if (0xdbff < uVar3) {
      if (uVar3 < 0xe000) {
        *param_3 = 0xfffd;
        param_2 = param_1 + 1;
        uVar2 = 0;
        goto LAB_1004642b;
      }
      goto LAB_10046424;
    }
    puVar1 = param_1 + 1;
    if (puVar1 == param_2) {
      *param_3 = 0xfffd;
      uVar2 = 0;
      goto LAB_1004642b;
    }
    if ((ushort)(*puVar1 + 0x2000) < 0xfc00) {
      *param_3 = 0xfffd;
      uVar2 = 0;
      param_2 = puVar1;
      goto LAB_1004642b;
    }
    *param_3 = uVar3 * 0x400 + 0xfca00000;
    *param_3 = (uint)param_1[1] + uVar3 * 0x400 + 0xfca02400;
    param_2 = param_1 + 2;
  }
  uVar2 = 1;
LAB_1004642b:
  return CONCAT44(uVar2,param_2);
}

