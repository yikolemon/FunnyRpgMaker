/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e580 */

void __cdecl FUN_0041e580(int param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if (*(code **)(param_2 + 0x78) != (code *)0x0) {
    (**(code **)(param_2 + 0x78))(*(undefined4 *)(param_2 + 0x74));
  }
  while (*(int *)(param_2 + 0x54) != 0) {
    FUN_0041d744(*(int *)(param_2 + 0x54));
  }
  FUN_004219a0((int *)(param_2 + 0x6c),FUN_0041e873,param_1,param_3);
  *(undefined4 *)(param_2 + 0x58) = 0;
  FUN_00421eef(param_2,param_1);
  pcVar2 = *(code **)(iVar1 + 0x34);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_2);
  }
  FUN_0041d055(*(int *)(param_2 + 0x68),*(uint *)(param_2 + 8) >> 10 & 1);
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(code **)(param_2 + 0x30) != (code *)0x0) {
    (**(code **)(param_2 + 0x30))(param_2);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    FUN_0041c607(param_1,*(int *)(param_2 + 0x80));
    *(undefined4 *)(param_2 + 0x80) = 0;
  }
  FUN_0041c607(param_1,param_2);
  return;
}

