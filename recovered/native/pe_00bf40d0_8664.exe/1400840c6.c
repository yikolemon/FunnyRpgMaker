/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400840c6 */

undefined8 FUN_1400840c6(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = (longlong *)*param_1;
  if ((code *)plVar2[4] == (code *)0x0) {
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if (*(uint *)(plVar2 + 1) == uVar1) goto LAB_140084100;
    uVar3 = *(uint *)(plVar2 + 1) - uVar1;
    if (0xfff < uVar3) {
      uVar3 = 0x1000;
    }
    FUN_1400b3550((undefined8 *)((longlong)param_1 + 0x74),
                  (undefined8 *)((ulonglong)uVar1 + *plVar2),(ulonglong)uVar3);
  }
  else {
    uVar3 = (*(code *)plVar2[4])
                      (plVar2,*(undefined4 *)((longlong)plVar2 + 0xc),(longlong)param_1 + 0x74,
                       0x1000);
    if (uVar3 == 0) {
LAB_140084100:
      param_1[0x410] = param_1[0x40f];
      return 0x55;
    }
  }
  *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + uVar3;
  param_1[3] = (longlong)param_1 + 0x74;
  *(uint *)(param_1 + 4) = uVar3;
  return 0;
}

