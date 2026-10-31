/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800754a8 */

void FUN_1800754a8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180075845(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if (cVar1 == '\0') {
    *(longlong *)(param_1 + 0x18) = param_1 + 8;
    *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
    *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
    *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
    *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  *(longlong **)(param_1 + 0x68) = plVar2;
  return;
}

