/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e4bb */

undefined4 __cdecl FUN_0041e4bb(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0x23;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    piVar3 = (int *)(*(int *)(param_1 + 0x80) + 0x40);
    *piVar3 = *piVar3 + -1;
    if (*(int *)(*(int *)(param_1 + 0x80) + 0x40) < 1) {
      iVar1 = *(int *)(param_1 + 0x60);
      piVar3 = (int *)FUN_0041e52b((int *)(iVar1 + 0x10),param_1);
      if (piVar3 == (int *)0x0) {
        return 0x23;
      }
      iVar2 = *(int *)(iVar1 + 8);
      FUN_0041e54f((undefined4 *)(iVar1 + 0x10),piVar3);
      FUN_0041c607(iVar2,(int)piVar3);
      FUN_0041e580(iVar2,param_1,iVar1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

