/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140022161 */

int FUN_140022161(longlong param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,uint param_5
                 ,longlong param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  pauVar4 = FUN_14001c423(lVar1,*(uint *)(lVar2 + 0x38),&local_4c);
  if (local_4c == 0) {
    *(longlong *)(pauVar4[4] + 0x10) = param_1;
    *(longlong *)(pauVar4[4] + 0x18) = lVar1;
    *(undefined8 *)pauVar4[5] = *param_2;
    if (*param_3 != 0) {
      (*pauVar4)[9] = (*pauVar4)[9] | 4;
    }
    pauVar5 = FUN_14001c423(lVar1,0x68,&local_4c);
    iVar3 = local_4c;
    if (local_4c == 0) {
      *(undefined1 (**) [32])(pauVar4[6] + 0x10) = pauVar5;
      *(undefined8 *)(pauVar5[2] + 0x10) = 0;
      if (0 < (int)param_5) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(pauVar4[6] + 0x10) + 0x50) != 0) break;
          if (*(int *)(param_6 + lVar7) == 0x696e6372) {
            *(undefined8 *)(*(longlong *)(pauVar4[6] + 0x10) + 0x50) =
                 *(undefined8 *)(param_6 + 8 + lVar7);
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulonglong)param_5 << 4 != lVar7);
      }
      *(undefined4 *)(*(longlong *)(pauVar4[6] + 0x10) + 0x5c) = 0xffffffff;
      if (*(code **)(lVar2 + 0x48) == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        local_58 = param_6;
        iVar3 = (**(code **)(lVar2 + 0x48))(*param_2,pauVar4,param_4);
      }
      *param_2 = *(undefined8 *)pauVar4[5];
      *param_3 = (byte)(*(uint *)(*pauVar4 + 8) >> 10) & 1;
      if (iVar3 == 0) {
        uVar6 = FUN_14001e08b((longlong)pauVar4);
        iVar3 = (int)uVar6;
        if (0x24 < iVar3 - 1U) {
          iVar3 = 0;
          goto LAB_1400222e5;
        }
      }
    }
  }
  else {
    pauVar5 = (undefined1 (*) [32])0x0;
    iVar3 = local_4c;
  }
  FUN_14002250f((longlong)pauVar4,lVar1);
  if (*(code **)(lVar2 + 0x50) != (code *)0x0) {
    (**(code **)(lVar2 + 0x50))(pauVar4);
  }
  FUN_14001c53d(lVar1,(longlong)pauVar5);
  FUN_14001c53d(lVar1,(longlong)pauVar4);
  pauVar4 = (undefined1 (*) [32])0x0;
LAB_1400222e5:
  *param_7 = pauVar4;
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_78);
}

