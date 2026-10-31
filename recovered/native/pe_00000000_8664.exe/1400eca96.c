/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400eca96 */

void FUN_1400eca96(void)

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
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  lVar4 = FUN_140081200();
  lVar4 = *(longlong *)(lVar4 + 0x38);
  local_38 = *(undefined4 *)(lVar4 + 0x28);
  uStack_34 = *(undefined4 *)(lVar4 + 0x2c);
  uStack_30 = *(undefined4 *)(lVar4 + 0x30);
  uStack_2c = *(undefined4 *)(lVar4 + 0x34);
  iVar1 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0x1c);
  iVar2 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0x20);
  cVar3 = FUN_140085d7e("Example: Image Viewer",&DAT_140f30936,0);
  if (cVar3 != '\0') {
    FUN_14010489e(&DAT_140f1c5e0);
    FUN_14008a381(&local_40);
    cVar3 = FUN_14008fd8e();
    fVar5 = DAT_1401c86c8;
    fVar6 = DAT_1401c86c8;
    if (cVar3 != '\0') {
      fVar5 = (float)iVar1 * DAT_1402113b0;
      fVar6 = (float)iVar2 * DAT_140211518;
    }
    local_40 = CONCAT44(-(uint)(fVar6 <= local_40._4_4_) & (uint)local_40._4_4_ |
                        ~-(uint)(fVar6 <= local_40._4_4_) & (uint)fVar6,
                        -(uint)(fVar5 <= (float)local_40) & (uint)(float)local_40 |
                        ~-(uint)(fVar5 <= (float)local_40) & (uint)fVar5);
    local_48 = iVar2;
    FUN_14010498b(&DAT_140f1c5e0,local_40,&local_38,iVar1);
  }
  FUN_140088c18();
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_68);
  }
  return;
}

