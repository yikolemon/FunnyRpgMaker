/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016e7cf */

undefined4 FUN_1016e7cf(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 8;
  param_2[2] = 0;
  param_2[1] = 0;
  iVar1 = FUN_1016e935();
  if (iVar1 == 0) {
    iVar1 = FUN_1016e995();
    if (iVar1 == 0) {
      iVar1 = FUN_1016f562();
      if (iVar1 == 0) {
        iVar1 = FUN_1016f629();
        if (iVar1 == 0) {
          iVar1 = FUN_1016fa60();
          if (iVar1 == 0) {
            iVar1 = FUN_1016fbe6();
            if (iVar1 == 0) {
              iVar1 = FUN_1016fcac();
              if (iVar1 == 0) {
                iVar1 = FUN_1016fe4f();
                if (iVar1 == 0) {
                  iVar1 = FUN_101705dd();
                  if (iVar1 == 0) {
                    FUN_10170e07();
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = FUN_1017079e(param_1);
                  }
                }
                else {
                  FUN_1016fe89(param_1);
                  uVar2 = FUN_101704b0(*param_1);
                }
              }
              else {
                uVar2 = FUN_1016fd35(param_1,param_2);
              }
            }
            else {
              uVar2 = FUN_1016fc47(param_1);
            }
          }
          else {
            uVar2 = FUN_1016fa77(param_1);
          }
        }
        else {
          uVar2 = FUN_1016f648(param_1,param_2);
        }
      }
      else {
        uVar2 = FUN_1016f579(param_1);
      }
    }
    else {
      uVar2 = FUN_1016e9ac(param_1);
    }
    return uVar2;
  }
  uVar2 = FUN_1016e94c();
  return uVar2;
}

