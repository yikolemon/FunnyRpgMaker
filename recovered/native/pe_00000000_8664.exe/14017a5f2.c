/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017a5f2 */

undefined1 * FUN_14017a5f2(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  code *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  puVar4 = (undefined1 *)FUN_14012afda(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,&local_4c);
  if (local_4c == 0) {
    local_4c = FUN_14012d612(param_2,*(undefined4 *)(param_3 + 0xc));
    if ((local_4c == 0) &&
       (local_4c = FUN_14012dc34(param_2,*(undefined2 *)(param_3 + 8)), local_4c == 0)) {
      uVar1 = *(ushort *)(param_3 + 8);
      if ((uVar1 & 0xfffe) == 0) {
        *puVar4 = 0;
        FUN_14012dd58(param_2);
      }
      else {
        lVar2 = *(longlong *)(param_2 + 0x38);
        lVar6 = 0;
        puVar5 = puVar4;
        local_58 = param_4;
        do {
          if ((*(char *)(lVar2 + lVar6 * 2) == '\0') &&
             (iVar3 = (*local_58)((int)*(char *)(lVar2 + 1 + lVar6 * 2)), iVar3 != 0)) {
            *puVar5 = *(undefined1 *)(lVar2 + 1 + lVar6 * 2);
            puVar5 = puVar5 + 1;
          }
          lVar6 = lVar6 + 1;
        } while ((uint)(uVar1 >> 1) != (uint)lVar6);
        *puVar5 = 0;
        FUN_14012dd58(param_2);
        if (puVar5 != puVar4) goto LAB_14017a692;
      }
    }
    FUN_140128b39(param_1,puVar4);
    *(undefined2 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    FUN_140128b39(param_1,*(undefined8 *)(param_3 + 0x10));
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  puVar4 = (undefined1 *)0x0;
LAB_14017a692:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return puVar4;
}

