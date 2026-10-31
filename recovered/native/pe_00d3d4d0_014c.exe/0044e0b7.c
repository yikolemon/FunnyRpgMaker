/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e0b7 */

undefined4 __fastcall FUN_0044e0b7(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(int **)(*param_1 + 0x2c8))[0x301];
  piVar3 = FUN_0041d39b(**(int **)(*param_1 + 0x2c8),(byte *)"pshinter");
  if ((puVar1 == (undefined4 *)0x0 || piVar3 == (int *)0x0) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*pcVar2)(piVar3);
  }
  return uVar4;
}

