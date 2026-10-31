/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018f150 */

undefined8
FUN_14018f150(PEXCEPTION_RECORD param_1,PVOID param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_58;
  undefined8 local_50;
  
  __except_validate_context_record(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar1;
  uVar9 = *(uint *)(param_4 + 9);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar9 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar9 * 4 + 1] <= uVar11) &&
            (uVar11 < puVar2[(ulonglong)uVar9 * 4 + 2])) && (puVar2[(ulonglong)uVar9 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar9 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_14018f26b;
          }
          if (((param_1->ExceptionCode == 0xe06d7363) &&
              (PTR___DestructExceptionObject_140eb2a18 != (undefined *)0x0)) &&
             (iVar3 = FUN_1401aac40(&PTR___DestructExceptionObject_140eb2a18), iVar3 != 0)) {
            (*(code *)PTR___DestructExceptionObject_140eb2a18)(param_1,1);
          }
          FUN_1401aacc0((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1,param_2,1);
          RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1),param_1,
                      (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          FUN_1401aacf0();
        }
LAB_14018f26b:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar2);
    }
  }
  else {
    uVar10 = *puVar2;
    if (uVar9 < uVar10) {
      uVar7 = param_4[4] - lVar1;
      do {
        uVar4 = (ulonglong)uVar9;
        if ((puVar2[uVar4 * 4 + 1] <= uVar11) && (uVar11 < puVar2[uVar4 * 4 + 2])) {
          uVar8 = param_1->ExceptionFlags & 0x20;
          if (uVar8 != 0) {
            uVar6 = 0;
            if (uVar10 != 0) {
              do {
                if ((((puVar2[uVar6 * 4 + 1] <= uVar7) && (uVar7 < puVar2[uVar6 * 4 + 2])) &&
                    (puVar2[uVar6 * 4 + 4] == puVar2[uVar4 * 4 + 4])) &&
                   (puVar2[uVar6 * 4 + 3] == puVar2[uVar4 * 4 + 3])) break;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
              } while (uVar5 < uVar10);
            }
            if ((uint)uVar6 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar4 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar9 + 1;
            (*(code *)((ulonglong)puVar2[uVar4 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar7 == puVar2[uVar4 * 4 + 4]) && (uVar8 != 0)) {
            return 1;
          }
        }
        uVar10 = *puVar2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return 1;
}

