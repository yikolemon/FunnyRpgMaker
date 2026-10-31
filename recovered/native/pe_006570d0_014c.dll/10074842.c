/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074842 */

int __thiscall FUN_10074842(int param_1,void *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint _Count;
  uint uVar4;
  
  if (param_4 < (int)(uint)(param_3 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      iVar2 = FUN_10074c96();
      return iVar2;
    }
    _Count = param_3;
    if ((**(int **)(param_1 + 0x1c) != 0) && (uVar4 = **(uint **)(param_1 + 0x2c), uVar4 != 0)) {
      if (param_3 <= uVar4) {
        uVar4 = param_3;
      }
      FUN_1025b2d0(param_2,**(int **)(param_1 + 0x1c),uVar4,param_4);
      param_2 = (void *)((int)param_2 + uVar4);
      _Count = param_3 - uVar4;
      **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) - uVar4;
      **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + uVar4;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
        iVar2 = *(int *)(param_1 + 0x50);
        iVar1 = *(int *)(param_1 + 0x54);
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = iVar2;
        **(int **)(param_1 + 0x2c) = iVar1 - iVar2;
      }
      do {
        if (_Count < 0x1000) {
          if (_Count == 0) {
            _Count = 0;
          }
          else {
            sVar3 = _fread(param_2,1,_Count,*(FILE **)(param_1 + 0x4c));
            _Count = _Count - sVar3;
          }
          break;
        }
        sVar3 = _fread(param_2,1,0xfff,*(FILE **)(param_1 + 0x4c));
        param_2 = (void *)((int)param_2 + sVar3);
        _Count = _Count - sVar3;
      } while (sVar3 == 0xfff);
    }
    iVar2 = param_3 - _Count;
  }
  return iVar2;
}

