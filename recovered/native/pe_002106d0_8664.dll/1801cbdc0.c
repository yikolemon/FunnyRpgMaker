/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cbdc0 */

void FUN_1801cbdc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xc0) != (code *)0x0) {
    (**(code **)(param_2 + 0xc0))(*(undefined8 *)(param_2 + 0xb8));
  }
  while (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1801cae6a();
  }
  FUN_1801cfaee(param_2 + 0xa8,FUN_1801cc133,param_1,param_3);
  *(undefined8 *)(param_2 + 0x80) = 0;
  FUN_1801d010c(param_2,param_1);
  pcVar2 = *(code **)(lVar1 + 0x50);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_2);
  }
  FUN_1801ca684(*(undefined8 *)(param_2 + 0xa0),*(uint *)(param_2 + 8) >> 10 & 1);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2);
  }
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    FUN_1801c9b65(param_1);
    *(undefined8 *)(param_2 + 0xd0) = 0;
  }
  FUN_1801c9b65(param_1,param_2);
  return;
}

