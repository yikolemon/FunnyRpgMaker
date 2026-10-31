/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00451cd7 */

undefined4 __fastcall FUN_00451cd7(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x140);
  piVar3 = FUN_0041d39b(*(int *)(*(int *)(*param_1 + 0x60) + 4),(byte *)"pshinter");
  if ((puVar1 == (undefined4 *)0x0 || piVar3 == (int *)0x0) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*pcVar2)(piVar3);
  }
  return uVar4;
}

