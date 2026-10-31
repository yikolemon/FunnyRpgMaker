/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140077d84 */

ulonglong FUN_140077d84(int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  if (*param_1 == -1) {
    local_3c = 0;
    if (DAT_1401cc260 != DAT_1401cc258) {
      uVar7 = 0;
      puVar6 = &local_3c;
      do {
        cVar1 = FUN_140077f94(param_1,param_2,puVar6,param_3);
        if (cVar1 != '\0') {
          *param_1 = (int)uVar7;
          goto LAB_140077eb8;
        }
        local_3c = (int)uVar7 + 1;
        uVar7 = (ulonglong)local_3c;
        uVar3 = (DAT_1401cc260 - DAT_1401cc258 >> 4) * -0x3333333333333333;
      } while (uVar7 <= uVar3 && uVar3 - uVar7 != 0);
    }
    puVar6 = (uint *)0x0;
    if (*(longlong *)(param_1 + 4) != *(longlong *)(param_1 + 2)) {
      do {
        iVar5 = (int)puVar6;
        local_3c = (int)((ulonglong)(DAT_1401cc260 - DAT_1401cc258) >> 4) * -0x33333333 + iVar5;
        cVar1 = FUN_140077f94(param_1,param_2,&local_3c,param_3);
        if (cVar1 != '\0') {
          *param_1 = (int)((ulonglong)(DAT_1401cc260 - DAT_1401cc258) >> 4) * -0x33333333 + iVar5;
LAB_140077eb8:
          puVar6 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
          goto LAB_140077ebb;
        }
        puVar6 = (uint *)(ulonglong)(iVar5 + 1);
        puVar4 = (uint *)((*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 4) *
                         -0x3333333333333333);
      } while (puVar6 <= puVar4 && (longlong)puVar4 - (longlong)puVar6 != 0);
      puVar6 = (uint *)0x0;
    }
  }
  else {
    local_3c = local_3c & 0xffffff00;
    uVar2 = FUN_140077f94(param_1,param_2,param_1);
    puVar6 = (uint *)(ulonglong)uVar2;
  }
LAB_140077ebb:
  if (DAT_1401c9640 == (local_38 ^ (ulonglong)auStack_68)) {
    return (ulonglong)puVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
}

