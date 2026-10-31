/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490804 */

undefined4 __cdecl FUN_00490804(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c [10];
  
  uVar2 = 0;
  FUN_00488e30(local_2c,(undefined4 *)0x0);
  if (param_1 == (FILE *)0x0) {
    uVar2 = FUN_00490926('\0');
    goto LAB_0049085b;
  }
  iVar1 = FUN_00490869(param_1,local_2c);
  if (iVar1 == 0) {
    if (((uint)param_1->_flag >> 0xb & 1) == 0) goto LAB_0049085b;
    iVar1 = __fileno(param_1);
    iVar1 = __commit(iVar1);
    if (iVar1 == 0) goto LAB_0049085b;
  }
  uVar2 = 0xffffffff;
LAB_0049085b:
  FUN_00488e90(local_2c);
  return uVar2;
}

