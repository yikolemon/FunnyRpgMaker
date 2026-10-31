/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac695 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1403ac695(float *param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                     char *param_6,char *param_7,char *param_8,longlong *param_9,float *param_10,
                     uint param_11)

{
  float fVar1;
  int iVar2;
  size_t sVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  float local_d8;
  uint local_d0;
  undefined8 local_c0;
  uint local_b4;
  ulonglong local_b0;
  
  local_b0 = ram0x000140613b10 ^ (ulonglong)auStack_f8;
  if (param_8 == (char *)0x0) {
    sVar3 = strlen(param_6);
    param_8 = param_6 + sVar3;
  }
  if (param_7 == (char *)0x0) {
    param_7 = param_8;
  }
  puVar4 = (uint *)FUN_1403a9044(param_2,param_3,DAT_1404ccdb0);
  fVar1 = (float)puVar4[5];
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  fVar8 = 0.0;
  if (param_6 < param_7) {
    pcVar5 = (char *)0x0;
    local_c0 = param_2;
    do {
      if (param_5 <= 0.0) {
LAB_1403ac7aa:
        local_b4 = (uint)*param_6;
        if (*param_6 < '\0') {
          iVar2 = FUN_14030eb69(&local_b4,param_6,param_8);
          pcVar6 = param_6 + iVar2;
        }
        else {
          pcVar6 = param_6 + 1;
        }
        fVar7 = fVar8;
        if (local_b4 != 0xd) {
          if (local_b4 == 10) {
            fVar8 = (float)FUN_140313933(*param_1);
            *param_1 = fVar8;
            param_1[1] = param_1[1] + param_3;
            fVar7 = 0.0;
            if ((param_11 & 4) != 0) {
              fVar8 = 0.0;
              param_6 = pcVar6;
              break;
            }
          }
          else {
            if ((*puVar4 <= local_b4) ||
               (fVar7 = *(float *)(*(longlong *)(puVar4 + 2) + (ulonglong)local_b4 * 4), fVar7 < 0.0
               )) {
              fVar7 = (float)thunk_FUN_1403ac14c(puVar4);
            }
            fVar7 = fVar7 * (param_3 / fVar1) + fVar8;
            if (param_4 <= fVar7) break;
          }
        }
      }
      else {
        if (pcVar5 == (char *)0x0) {
          local_d8 = param_5 - fVar8;
          local_d0 = param_11;
          pcVar5 = (char *)FUN_1403ac43f(local_c0,param_3,param_6,param_8);
        }
        if (param_6 < pcVar5) goto LAB_1403ac7aa;
        if (*param_1 <= fVar8 && fVar8 != *param_1) {
          *param_1 = fVar8;
        }
        param_1[1] = param_1[1] + param_3;
        param_6 = (char *)FUN_1403ac2e9(param_6,param_8,param_11);
        fVar8 = 0.0;
        if ((param_11 & 4) != 0) break;
        pcVar5 = (char *)0x0;
        pcVar6 = param_6;
        fVar7 = fVar8;
      }
      fVar8 = fVar7;
      param_6 = pcVar6;
    } while (param_6 < param_7);
  }
  if (*param_1 <= fVar8 && fVar8 != *param_1) {
    *param_1 = fVar8;
  }
  fVar1 = param_1[1];
  if (param_10 != (float *)0x0) {
    *param_10 = fVar8;
    param_10[1] = param_3 + fVar1;
  }
  if ((0.0 < fVar8) || ((fVar1 == 0.0 && (!NAN(fVar1))))) {
    param_1[1] = param_3 + fVar1;
  }
  if (param_9 != (longlong *)0x0) {
    *param_9 = (longlong)param_6;
  }
  if (ram0x000140613b10 != (local_b0 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_b0 ^ (ulonglong)auStack_f8);
  }
  return param_1;
}

