/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404f16 */

void __fastcall FUN_00404f16(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_00404f4c(param_1,puVar1);
    puVar1 = puVar2;
  }
  FUN_0047f280((LPVOID)*param_1);
  return;
}

