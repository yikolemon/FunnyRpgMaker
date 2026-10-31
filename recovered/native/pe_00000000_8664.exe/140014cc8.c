/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140014cc8 */

longlong FUN_140014cc8(longlong param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  ulonglong _Count;
  ulonglong uVar4;
  
  if ((longlong)param_3 < 1) {
    lVar2 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = FUN_1400151fa(param_1,param_2,param_3);
      return lVar2;
    }
    _Count = param_3;
    if ((**(longlong **)(param_1 + 0x38) != 0) &&
       (uVar4 = (ulonglong)**(int **)(param_1 + 0x50), uVar4 != 0)) {
      if (param_3 < uVar4) {
        uVar4 = param_3;
      }
      FUN_1401c5180(param_2,**(longlong **)(param_1 + 0x38),uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4);
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - (int)uVar4;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)(int)uVar4;
      _Count = param_3 - uVar4;
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        iVar1 = *(int *)(param_1 + 0x90);
        lVar2 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = iVar1 - (int)lVar2;
      }
      do {
        if (_Count < 0x1000) {
          if (_Count == 0) {
            _Count = 0;
          }
          else {
            sVar3 = fread(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
            _Count = _Count - sVar3;
          }
          break;
        }
        sVar3 = fread(param_2,1,0xfff,*(FILE **)(param_1 + 0x80));
        param_2 = (void *)((longlong)param_2 + sVar3);
        _Count = _Count - sVar3;
      } while (sVar3 == 0xfff);
    }
    lVar2 = param_3 - _Count;
  }
  return lVar2;
}

