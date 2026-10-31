/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a6e12 */

void FUN_1801a6e12(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  int local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar4 = FUN_180107ee8();
  lVar4 = *(longlong *)(lVar4 + 0x38);
  local_38 = *(undefined4 *)(lVar4 + 0x28);
  uStack_34 = *(undefined4 *)(lVar4 + 0x2c);
  uStack_30 = *(undefined4 *)(lVar4 + 0x30);
  uStack_2c = *(undefined4 *)(lVar4 + 0x34);
  iVar1 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0x1c);
  iVar2 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0x20);
  cVar3 = FUN_18010ca66("Example: Image Viewer",&DAT_18041f1e6,0);
  if (cVar3 != '\0') {
    FUN_1801bec1a(&DAT_180408e40);
    FUN_180111069(&local_40);
    cVar3 = FUN_180116a76();
    fVar5 = DAT_1802ac570;
    fVar6 = DAT_1802ac570;
    if (cVar3 != '\0') {
      fVar5 = (float)iVar1 * DAT_1802dbb3c;
      fVar6 = (float)iVar2 * DAT_1802dbb50;
    }
    local_40 = CONCAT44(-(uint)(fVar6 <= local_40._4_4_) & (uint)local_40._4_4_ |
                        ~-(uint)(fVar6 <= local_40._4_4_) & (uint)fVar6,
                        -(uint)(fVar5 <= (float)local_40) & (uint)(float)local_40 |
                        ~-(uint)(fVar5 <= (float)local_40) & (uint)fVar5);
    local_48 = iVar2;
    FUN_1801bed07(&DAT_180408e40,local_40,&local_38,iVar1);
  }
  FUN_18010f900();
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
  }
  return;
}

