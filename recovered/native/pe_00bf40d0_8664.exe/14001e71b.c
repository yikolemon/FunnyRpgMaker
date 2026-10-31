/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e71b */

void FUN_14001e71b(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xc0) != (code *)0x0) {
    (**(code **)(param_2 + 0xc0))(*(undefined8 *)(param_2 + 0xb8));
  }
  while (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_14001d842(*(longlong *)(param_2 + 0x78));
  }
  FUN_140021ef1((longlong *)(param_2 + 0xa8),FUN_14001ea8e,param_1,param_3);
  *(undefined8 *)(param_2 + 0x80) = 0;
  FUN_14002250f(param_2,param_1);
  pcVar2 = *(code **)(lVar1 + 0x50);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_2);
  }
  FUN_14001d05c(*(longlong *)(param_2 + 0xa0),*(uint *)(param_2 + 8) >> 10 & 1);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2);
  }
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    FUN_14001c53d(param_1,*(longlong *)(param_2 + 0xd0));
    *(undefined8 *)(param_2 + 0xd0) = 0;
  }
  FUN_14001c53d(param_1,param_2);
  return;
}

