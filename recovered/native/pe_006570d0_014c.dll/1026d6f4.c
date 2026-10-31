/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d6f4 */

undefined4 FUN_1026d6f4(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_2c [40];
  
  uVar2 = 0;
  FUN_1025eb50(0);
  if (param_1 == (FILE *)0x0) {
    uVar2 = FUN_1026d816(0);
    goto LAB_1026d74b;
  }
  iVar1 = FUN_1026d759(param_1,local_2c);
  if (iVar1 == 0) {
    if (((uint)param_1->_flag >> 0xb & 1) == 0) goto LAB_1026d74b;
    iVar1 = __fileno(param_1);
    iVar1 = __commit(iVar1);
    if (iVar1 == 0) goto LAB_1026d74b;
  }
  uVar2 = 0xffffffff;
LAB_1026d74b:
  FUN_1025ebb0();
  return uVar2;
}

