/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140108db2 */

void FUN_140108db2(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_40 = &local_res18;
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  iVar4 = *param_1;
  iVar6 = iVar4 + -1 + (uint)(iVar4 == 0);
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14007940a(param_1,param_2,local_40);
  iVar1 = *param_1 + -1 + (uint)(*param_1 == 0);
  if (iVar6 < iVar1) {
    lVar7 = (longlong)iVar6;
    iVar4 = iVar4 + (uint)(iVar4 == 0);
    do {
      if (*(char *)(*(longlong *)(param_1 + 2) + lVar7) == '\n') {
        iVar6 = param_1[0x4a];
        if (iVar6 == param_1[0x4b]) {
          if (iVar6 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar6 / 2 + iVar6;
          }
          iVar5 = iVar6 + 1;
          if (iVar6 + 1 < iVar2) {
            iVar5 = iVar2;
          }
          lVar3 = FUN_140077ab4((longlong)iVar5 << 2);
          if (*(longlong *)(param_1 + 0x4c) != 0) {
            FUN_1401c5180(lVar3,*(longlong *)(param_1 + 0x4c),(longlong)param_1[0x4a] << 2);
            FUN_140077b90(*(undefined8 *)(param_1 + 0x4c));
          }
          *(longlong *)(param_1 + 0x4c) = lVar3;
          param_1[0x4b] = iVar5;
          iVar6 = param_1[0x4a];
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x4c);
        }
        *(int *)(lVar3 + (longlong)iVar6 * 4) = iVar4;
        param_1[0x4a] = param_1[0x4a] + 1;
      }
      lVar7 = lVar7 + 1;
      iVar4 = iVar4 + 1;
    } while (lVar7 < iVar1);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

