/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140041d96 */

undefined8 FUN_140041d96(longlong param_1,char *param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_4;
  iVar1 = strcmp(param_2,"interpreter-version");
  uVar3 = 0xc;
  if (iVar1 == 0) {
    if ((char)param_4 == '\0') {
      uVar2 = *param_3;
    }
    else {
      uVar2 = FUN_14009bf40((longlong)param_3,(longlong *)0x0,10,uVar4);
    }
    if (uVar2 != 0x23) {
      if ((uVar2 != 0x28) && (uVar2 != 0x26)) {
        return 7;
      }
      uVar2 = 0x28;
    }
    *(uint *)(param_1 + 0x70) = uVar2;
    uVar3 = 0;
  }
  return uVar3;
}

