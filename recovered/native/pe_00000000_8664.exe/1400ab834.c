/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ab834 */

int FUN_1400ab834(int *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    *(undefined2 *)((longlong)param_1 + 5) = 0xff00;
    if (param_1[3] < 0) {
      uVar4 = FUN_140077ab4(0);
      if (*(longlong *)(param_1 + 4) != 0) {
        FUN_1401c5180(uVar4,*(longlong *)(param_1 + 4),(longlong)param_1[2] * 0xc);
        FUN_140077b90(*(undefined8 *)(param_1 + 4));
      }
      *(undefined8 *)(param_1 + 4) = uVar4;
      param_1[3] = 0;
    }
    param_1[2] = 0;
    FUN_1400ab942(param_1 + 6,0);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    cVar6 = *(char *)((longlong)param_1 + 6);
    uVar5 = (uint)cVar6;
    uVar2 = param_1[2];
    if (cVar6 < '\0') {
      *(bool *)((longlong)param_1 + 5) = uVar2 == uVar5;
      iVar3 = 0;
      if (cVar6 == -1) {
        *(undefined1 *)(param_1 + 1) = 1;
        iVar3 = param_2;
      }
    }
    else {
      if ((int)uVar5 < (int)uVar2) {
        if ((*(char *)(*(longlong *)(param_1 + 4) + 5 + (ulonglong)uVar5 * 0xc) != '\0') ||
           ('\x02' < *(char *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar5 * 0xc + 4))) {
          cVar6 = cVar6 + '\x01';
          *(char *)((longlong)param_1 + 6) = cVar6;
          uVar5 = (uint)cVar6;
        }
      }
      *(bool *)((longlong)param_1 + 5) = uVar2 == uVar5;
      if ((int)uVar5 < (int)uVar2 && -1 < cVar6) {
        pcVar1 = (char *)(*(longlong *)(param_1 + 4) + 4 + (longlong)(int)uVar5 * 0xc);
        *pcVar1 = *pcVar1 + '\x01';
        *(undefined1 *)(param_1 + 1) = 1;
        iVar3 = *(int *)(*(longlong *)(param_1 + 4) +
                        (longlong)*(char *)((longlong)param_1 + 6) * 0xc);
      }
    }
  }
  return iVar3;
}

