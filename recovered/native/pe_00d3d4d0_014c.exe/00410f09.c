/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410f09 */

undefined8 __cdecl FUN_00410f09(ushort *param_1,ushort *param_2,uint *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  *param_3 = uVar3;
  if (uVar3 < 0xd800) {
LAB_00410f20:
    param_2 = param_1 + 1;
  }
  else {
    if (0xdbff < uVar3) {
      if (uVar3 < 0xe000) {
        *param_3 = 0xfffd;
        param_2 = param_1 + 1;
        uVar2 = 0;
        goto LAB_00410f27;
      }
      goto LAB_00410f20;
    }
    puVar1 = param_1 + 1;
    if (puVar1 == param_2) {
      *param_3 = 0xfffd;
      uVar2 = 0;
      goto LAB_00410f27;
    }
    if ((ushort)(*puVar1 + 0x2000) < 0xfc00) {
      *param_3 = 0xfffd;
      uVar2 = 0;
      param_2 = puVar1;
      goto LAB_00410f27;
    }
    *param_3 = uVar3 * 0x400 + 0xfca00000;
    *param_3 = (uint)param_1[1] + uVar3 * 0x400 + 0xfca02400;
    param_2 = param_1 + 2;
  }
  uVar2 = 1;
LAB_00410f27:
  return CONCAT44(uVar2,param_2);
}

