/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d58b3 */

void FUN_1400d58b3(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_1400d30d4();
  lVar2 = FUN_140081200();
  uVar3 = FUN_140081211();
  thunk_FUN_14009790c();
  FUN_1400d5482();
  if ((longlong *)plVar1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[2] + 0x10))();
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
  }
  if ((longlong *)plVar1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
  }
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) & 0xfffffbe7;
  FUN_140096fec(uVar3);
  FUN_1400d5936(plVar1);
  return;
}

