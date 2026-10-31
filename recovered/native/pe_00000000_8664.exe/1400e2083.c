/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2083 */

void FUN_1400e2083(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    uVar3 = FUN_140117936();
    thunk_FUN_1400e148b(param_1,uVar3);
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x28) == 0)) {
    uVar4 = *(int *)(param_1 + 0x10) - 1;
    uVar4 = (int)uVar4 >> 1 | uVar4;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    uVar2 = *(int *)(param_1 + 0xc) - 1;
    uVar2 = (int)uVar2 >> 1 | uVar2;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    FUN_1400e455b(param_1,((int)uVar2 >> 0x10 | uVar2) + 1,((int)uVar4 >> 0x10 | uVar4) + 1);
  }
  uVar3 = FUN_140077ab4(0xf8);
  FUN_1400e5490(uVar3);
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  FUN_1400e3646(param_1);
  FUN_1400e4c02(param_1);
  FUN_1400e4dd4(param_1);
  FUN_1400e50c4(param_1);
  FUN_1400e22d3(param_1);
  FUN_1400e451b(param_1);
  FUN_1400e5634();
  return;
}

