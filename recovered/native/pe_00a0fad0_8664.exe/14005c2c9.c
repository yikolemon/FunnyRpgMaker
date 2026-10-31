/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005c2c9 */

ushort * FUN_14005c2c9(ushort *param_1,ushort *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  ushort *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  lVar5 = 1;
  if (0xd7ff < uVar1) {
    if (uVar1 < 0xdc00) {
      if ((param_1 + 1 == param_2) || ((param_1[1] & 0xfc00) != 0xdc00)) {
LAB_14005c3ee:
                    /* WARNING: Subroutine does not return */
        FUN_1400451d8("Invalid format string.");
      }
      lVar5 = 2;
    }
    else if (uVar1 < 0xe000) goto LAB_14005c3ee;
  }
  puVar4 = param_1 + lVar5;
  if (param_1 + lVar5 == param_2) {
    puVar4 = param_1;
  }
  do {
    uVar2 = *puVar4;
    if (uVar2 == 0x5e) {
      uVar3 = 3;
LAB_14005c38b:
      if ((longlong)puVar4 - (longlong)param_1 != 0) {
        if (uVar1 == 0x7b) {
                    /* WARNING: Subroutine does not return */
          FUN_1400451d8("invalid fill character \'{\'");
        }
        local_28 = (longlong)puVar4 - (longlong)param_1 >> 1;
        local_30 = param_1;
        FUN_14005c7fe(param_3);
        param_1 = puVar4;
      }
      param_1 = param_1 + 1;
      *(undefined1 *)(*param_3 + 9) = uVar3;
      break;
    }
    if (uVar2 == 0x3e) {
      uVar3 = 2;
      goto LAB_14005c38b;
    }
    if (uVar2 == 0x3c) {
      uVar3 = 1;
      goto LAB_14005c38b;
    }
    bVar6 = puVar4 != param_1;
    puVar4 = param_1;
  } while (bVar6);
  if (DAT_1401c9640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_58);
  }
  return param_1;
}

