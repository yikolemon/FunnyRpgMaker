/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e7d7 */

undefined4 __cdecl FUN_0041e7d7(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0x24;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar5 = 0x23;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x60);
      if (iVar2 == 0) {
        uVar5 = 0x22;
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        piVar4 = (int *)FUN_0041e52b((int *)(iVar1 + 0x6c),(int)param_1);
        if (piVar4 != (int *)0x0) {
          FUN_0041e54f((undefined4 *)(iVar1 + 0x6c),piVar4);
          FUN_0041c607(iVar3,(int)piVar4);
          if (*(int **)(iVar1 + 0x58) == param_1) {
            *(undefined4 *)(iVar1 + 0x58) = 0;
            if (*(int *)(iVar1 + 0x6c) != 0) {
              *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 8);
            }
          }
          FUN_0041e873(iVar3,(int)param_1,iVar2);
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}

