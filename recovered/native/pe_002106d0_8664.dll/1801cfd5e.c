/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cfd5e */

int FUN_1801cfd5e(longlong param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,uint param_5
                 ,longlong param_6,longlong *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar4 = FUN_1801c9a4b(uVar1,*(undefined4 *)(lVar2 + 0x38),&local_4c);
  if (local_4c == 0) {
    *(longlong *)(lVar4 + 0x90) = param_1;
    *(undefined8 *)(lVar4 + 0x98) = uVar1;
    *(undefined8 *)(lVar4 + 0xa0) = *param_2;
    if (*param_3 != 0) {
      *(byte *)(lVar4 + 9) = *(byte *)(lVar4 + 9) | 4;
    }
    lVar5 = FUN_1801c9a4b(uVar1,0x68,&local_4c);
    iVar3 = local_4c;
    if (local_4c == 0) {
      *(longlong *)(lVar4 + 0xd0) = lVar5;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      if (0 < (int)param_5) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xd0) + 0x50) != 0) break;
          if (*(int *)(param_6 + lVar6) == 0x696e6372) {
            *(undefined8 *)(*(longlong *)(lVar4 + 0xd0) + 0x50) =
                 *(undefined8 *)(param_6 + 8 + lVar6);
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulonglong)param_5 << 4 != lVar6);
      }
      *(undefined4 *)(*(longlong *)(lVar4 + 0xd0) + 0x5c) = 0xffffffff;
      if (*(code **)(lVar2 + 0x48) == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        local_58 = param_6;
        iVar3 = (**(code **)(lVar2 + 0x48))(*param_2,lVar4,param_4);
      }
      *param_2 = *(undefined8 *)(lVar4 + 0xa0);
      *param_3 = (byte)(*(uint *)(lVar4 + 8) >> 10) & 1;
      if (iVar3 == 0) {
        iVar3 = FUN_1801cb6b3(lVar4);
        if (0x24 < iVar3 - 1U) {
          iVar3 = 0;
          goto LAB_1801cfee2;
        }
      }
    }
  }
  else {
    lVar5 = 0;
    iVar3 = local_4c;
  }
  FUN_1801d010c(lVar4,uVar1);
  if (*(code **)(lVar2 + 0x50) != (code *)0x0) {
    (**(code **)(lVar2 + 0x50))(lVar4);
  }
  FUN_1801c9b65(uVar1,lVar5);
  FUN_1801c9b65(uVar1,lVar4);
  lVar4 = 0;
LAB_1801cfee2:
  *param_7 = lVar4;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

