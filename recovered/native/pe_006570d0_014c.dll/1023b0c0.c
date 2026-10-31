/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023b0c0 */

short __fastcall FUN_1023b0c0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  short sVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((*(short **)piVar1[7] == (short *)0x0) || (*(int *)piVar1[0xb] < 1)) {
      pcVar2 = *(code **)(*piVar1 + 0x18);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar3 = (*pcVar2)();
    }
    else {
      sVar3 = **(short **)piVar1[7];
    }
    if (sVar3 != -1) {
      *(short *)((int)param_1 + 6) = sVar3;
      *(undefined1 *)(param_1 + 1) = 1;
      return sVar3;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return *(short *)((int)param_1 + 6);
}

