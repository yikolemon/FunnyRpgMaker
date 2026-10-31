/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2412 */

undefined8 FUN_1400e2412(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x88);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x2b8);
  }
  if ((*(code **)(lVar2 + 0x18) != (code *)0x0) &&
     (cVar1 = (**(code **)(lVar2 + 0x18))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

