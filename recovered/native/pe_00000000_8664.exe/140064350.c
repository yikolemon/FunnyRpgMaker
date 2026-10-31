/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140064350 */

void FUN_140064350(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar5 = param_1[2] - lVar1;
  uVar3 = (longlong)uVar5 >> 5;
  lVar6 = (uVar3 >> 1) + (ulonglong)(uVar3 >> 1 == 0);
  uVar7 = lVar6 + uVar3;
  if (0x7ffffffffffffffU - lVar6 < uVar3) {
    uVar7 = 0x7ffffffffffffff;
  }
  if (uVar3 < uVar7) {
    if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140002001();
    }
    lVar6 = param_1[1];
    lVar4 = FUN_140001fba(uVar7 * 0x20);
    local_60 = param_1;
    local_58 = lVar4;
    local_50 = uVar7;
    thunk_FUN_1400644f2(lVar1,lVar6,lVar4);
    *param_1 = lVar4;
    param_1[1] = (lVar6 - lVar1) + lVar4;
    param_1[2] = uVar7 * 0x20 + lVar4;
    local_58 = 0;
    if ((char)param_1[3] == '\x01') {
      lVar6 = lVar1;
      if (0xfff < uVar5) {
        lVar6 = *(longlong *)(lVar1 + -8);
        if (0x1f < (ulonglong)((lVar1 + -8) - lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar5 = uVar5 + 0x27;
      }
      thunk_FUN_14018e090(lVar6,uVar5);
    }
    else {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    FUN_1400644ac(&local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189b60(0xc);
}

