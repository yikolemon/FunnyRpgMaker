/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e873 */

void __cdecl FUN_0041e873(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_3 + 0xc) + 0x3c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  if (*(code **)(param_2 + 8) != (code *)0x0) {
    (**(code **)(param_2 + 8))(param_2);
  }
  FUN_0041c607(param_1,*(int *)(param_2 + 0x28));
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_0041c607(param_1,param_2);
  return;
}

