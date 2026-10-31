/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ae3db */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1403ae3db(int *param_1,int *param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 auStack_a8 [44];
  int local_7c;
  uint *local_78;
  int local_6c;
  ulonglong local_68;
  int *local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_a8;
  iVar9 = *param_2;
  iVar4 = param_3 + param_2[2] + -1;
  iVar4 = iVar4 - iVar4 % param_2[2];
  if ((iVar9 < iVar4) || (local_6c = param_2[1], local_6c < (int)param_4)) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    puVar8 = (uint *)(param_2 + 6);
    puVar11 = *(uint **)(param_2 + 6);
    uVar2 = *puVar11;
    uVar3 = (ulonglong)uVar2;
    local_58 = param_4;
    if (iVar9 < (int)(uVar2 + iVar4)) {
      local_78 = (uint *)0x0;
      local_7c = 0x40000000;
      uVar7 = 0x40000000;
      iVar9 = 0;
    }
    else {
      local_7c = 0x40000000;
      local_78 = (uint *)0x0;
      uVar7 = 0x40000000;
      puVar6 = puVar11;
      puVar10 = puVar8;
      local_68 = uVar3;
      local_60 = param_1;
      do {
        uVar2 = FUN_1403ae5ee(puVar6,uVar3,iVar4,&local_4c);
        if (param_2[4] == 0) {
          if ((int)uVar2 < (int)uVar7) {
            local_78 = puVar10;
            uVar7 = uVar2;
          }
        }
        else if (((int)((int)local_58 + uVar2) <= local_6c) &&
                (((int)uVar2 < (int)uVar7 || (local_4c < local_7c && uVar2 == uVar7)))) {
          local_7c = local_4c;
          local_78 = puVar10;
          uVar7 = uVar2;
        }
        puVar10 = puVar6 + 2;
        uVar2 = **(uint **)(puVar6 + 2);
        uVar3 = (ulonglong)uVar2;
        puVar6 = *(uint **)(puVar6 + 2);
      } while ((int)(uVar2 + iVar4) <= iVar9);
      if (local_78 == (uint *)0x0) {
        local_78 = (uint *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = **(int **)local_78;
      }
      uVar2 = (uint)local_68;
      param_1 = local_60;
    }
    puVar6 = puVar11;
    if (param_2[4] == 1) {
      while ((int)uVar2 < iVar4) {
        uVar2 = **(uint **)(puVar6 + 2);
        puVar6 = *(uint **)(puVar6 + 2);
      }
      do {
        iVar5 = *puVar6 - iVar4;
        puVar10 = puVar8;
        puVar1 = puVar11;
        do {
          puVar11 = puVar1;
          puVar8 = puVar10;
          puVar10 = puVar11 + 2;
          puVar1 = *(uint **)(puVar11 + 2);
        } while ((int)**(uint **)(puVar11 + 2) <= iVar5);
        uVar2 = FUN_1403ae5ee(puVar11,iVar5,iVar4,&local_4c);
        if ((((int)((int)local_58 + uVar2) <= local_6c) && ((int)uVar2 <= (int)uVar7)) &&
           (((uVar2 < uVar7 || (local_4c < local_7c)) || ((local_4c == local_7c && (iVar5 < iVar9)))
            ))) {
          local_7c = local_4c;
          iVar9 = iVar5;
          local_78 = puVar8;
          uVar7 = uVar2;
        }
        puVar6 = *(uint **)(puVar6 + 2);
      } while (puVar6 != (uint *)0x0);
    }
    *(uint **)(param_1 + 2) = local_78;
    *param_1 = iVar9;
    param_1[1] = uVar7;
  }
  if (ram0x000140613b10 == (local_48 ^ (ulonglong)auStack_a8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_a8);
}

