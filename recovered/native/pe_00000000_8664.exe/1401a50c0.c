/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a50c0 */

undefined8
FUN_1401a50c0(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar6;
  
  __acrt_lock(0xb);
  uVar8 = 0;
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
    if (param_2 == (undefined2 *)0x0) {
LAB_1401a511c:
      if (param_3 == 0) goto LAB_1401a5121;
LAB_1401a5128:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (undefined2 *)0x0) goto LAB_1401a511c;
        goto LAB_1401a5128;
      }
LAB_1401a5121:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0;
      }
      lVar4 = FUN_1401a51b8(param_4);
      if (lVar4 != 0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(short *)(lVar4 + lVar5 * 2) != 0);
        uVar7 = lVar6 + 2;
        *param_1 = uVar7;
        if (param_3 != 0) {
          if (param_3 < uVar7) {
            uVar8 = 0x22;
          }
          else {
            iVar2 = FUN_1401af320();
            if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_1401a517a;
    }
  }
  puVar3 = (undefined4 *)FUN_14019e8cc();
  uVar8 = 0x16;
  *puVar3 = 0x16;
  FUN_1401ae640();
LAB_1401a517a:
  __acrt_unlock(0xb);
  return uVar8;
}

