/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102769df */

int FUN_102769df(int param_1,char param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_248 [137];
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  __crt_seh_guarded_call<void> local_15;
  undefined4 *local_14;
  
  FUN_1027693f(param_3,param_4);
  local_1c = getSystemCP(param_1);
  if (local_1c == *(int *)(*(int *)(param_3 + 0x48) + 4)) {
    iVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_10274170(0x220);
    iVar2 = local_1c;
    local_14 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10274120(0);
      iVar2 = -1;
    }
    else {
      puVar5 = *(undefined4 **)(param_3 + 0x48);
      puVar6 = local_248;
      for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = local_248;
      puVar6 = puVar3;
      for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *puVar3 = 0;
      iVar2 = FUN_10276666(iVar2,puVar3);
      if (iVar2 == -1) {
        puVar3 = (undefined4 *)FUN_10268ffd();
        *puVar3 = 0x16;
        FUN_10274120(local_14);
        iVar2 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_1026b44e();
        }
        piVar1 = *(int **)(param_3 + 0x48);
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (*(undefined **)(param_3 + 0x48) != &DAT_1039b6b0)) {
          FUN_10274120(*(undefined4 *)(param_3 + 0x48));
        }
        *local_14 = 1;
        *(undefined4 **)(param_3 + 0x48) = local_14;
        if ((*(uint *)(param_3 + 0x350) & DAT_1039bbd0) == 0) {
          local_24 = &param_3;
          local_20 = &param_4;
          local_1c = 5;
          local_14 = (undefined4 *)0x5;
          __crt_seh_guarded_call<void>::
          operator()<<lambda_ceb1ee4838e85a9d631eb091e2fbe199>,<lambda_ae742caa10f662c28703da3d2ea5e57e>&,<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>_>
                    (&local_15,(<lambda_ceb1ee4838e85a9d631eb091e2fbe199> *)&local_14,
                     (<lambda_ae742caa10f662c28703da3d2ea5e57e> *)&local_24,
                     (<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37> *)&local_1c);
          if (param_2 != '\0') {
            PTR_DAT_1039b4c4 = (undefined *)*param_4;
          }
        }
        FUN_10274120(0);
      }
    }
  }
  return iVar2;
}

