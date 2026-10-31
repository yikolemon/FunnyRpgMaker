/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140072ff0 */

void FUN_140072ff0(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffeb8;
  undefined1 local_138 [56];
  undefined1 local_100 [56];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  longlong local_68;
  char *local_60;
  longlong local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2[2] == 0) {
    return;
  }
  local_60 = (char *)((longlong)param_1 + 0x5a);
  local_58 = 0;
  uVar13 = 0;
  lVar8 = 0;
  local_68 = 0;
  bVar3 = 0;
  uVar12 = 0;
  local_49 = param_3;
code_r0x000140073063:
  lVar6 = local_58;
  puVar11 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar11 = (undefined8 *)*param_2;
  }
  uVar10 = param_2[2];
  iVar2 = *(int *)(param_1 + 0x50);
  do {
    bVar1 = *(byte *)((longlong)puVar11 + uVar13);
    if (bVar3 == 0) {
      uVar12 = 0xffU >> ((&DAT_140141a28)[bVar1] & 0x1f) & (uint)bVar1;
    }
    else {
      uVar12 = uVar12 << 6 | bVar1 & 0x3f;
    }
    bVar3 = (&UNK_140141b28)[(ulonglong)(byte)(&DAT_140141a28)[bVar1] + (ulonglong)bVar3 * 0x10];
    if (bVar3 != 1) {
      if (bVar3 != 0) {
        if (local_49 == 0) {
          local_60[local_58] = bVar1;
          local_58 = local_58 + 1;
        }
        lVar8 = lVar8 + 1;
        goto LAB_140073395;
      }
      switch(uVar12) {
      case 8:
        (local_60 + local_58)[0] = '\\';
        (local_60 + local_58)[1] = 'b';
        lVar6 = local_58 + 2;
        break;
      case 9:
        (local_60 + local_58)[0] = '\\';
        (local_60 + local_58)[1] = 't';
        lVar6 = local_58 + 2;
        break;
      case 10:
        (local_60 + local_58)[0] = '\\';
        (local_60 + local_58)[1] = 'n';
        lVar6 = local_58 + 2;
        break;
      case 0xb:
switchD_140073106_caseD_b:
        if ((0x1f < uVar12 & (local_49 ^ 1 | uVar12 < 0x7f)) == 0) {
          if (uVar12 < 0x10000) {
            FUN_14006ee7f(local_60 + local_58,7,"\\u%04x",uVar12);
            lVar6 = lVar6 + 6;
          }
          else {
            in_stack_fffffffffffffeb8 =
                 CONCAT44((int)(in_stack_fffffffffffffeb8 >> 0x20),uVar12) & 0xffffffff000003ff |
                 0xdc00;
            FUN_14006ee7f(local_60 + local_58,0xd,&DAT_14016e7df,(uVar12 >> 10) + 0xd7c0 & 0xffff,
                          in_stack_fffffffffffffeb8);
            lVar6 = lVar6 + 0xc;
          }
        }
        else {
          local_60[local_58] = bVar1;
          lVar6 = local_58 + 1;
        }
        break;
      case 0xc:
        (local_60 + local_58)[0] = '\\';
        (local_60 + local_58)[1] = 'f';
        lVar6 = local_58 + 2;
        break;
      case 0xd:
        (local_60 + local_58)[0] = '\\';
        (local_60 + local_58)[1] = 'r';
        lVar6 = local_58 + 2;
        break;
      default:
        if (uVar12 == 0x22) {
          (local_60 + local_58)[0] = '\\';
          (local_60 + local_58)[1] = '\"';
          lVar6 = local_58 + 2;
        }
        else {
          if (uVar12 != 0x5c) goto switchD_140073106_caseD_b;
          (local_60 + local_58)[0] = '\\';
          (local_60 + local_58)[1] = '\\';
          lVar6 = local_58 + 2;
        }
      }
      if (0xc < lVar6 - 500U) goto LAB_140073392;
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_60);
      goto LAB_140073367;
    }
    if (iVar2 - 1U < 2) break;
    if (iVar2 == 0) {
      FUN_140073a44(local_a8);
      FUN_14001943c(local_c8,uVar13);
      FUN_14006ec17(local_88,"invalid UTF-8 byte at index ",local_c8,": 0x",local_a8);
      FUN_14006bdec(local_138,0x13c,local_88,0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_138,&DAT_140196700);
    }
    uVar13 = uVar13 + 1;
    bVar3 = 1;
    if (uVar10 <= uVar13) goto code_r0x0001400733fd;
  } while( true );
  uVar13 = (uVar13 - 1) + (ulonglong)(lVar8 == 0);
  if (iVar2 == 1) {
    pcVar4 = local_60 + local_68;
    if (local_49 == 0) {
      pcVar4[0] = -0x11;
      pcVar4[1] = -0x41;
      cVar5 = -0x43;
      lVar8 = 2;
      lVar9 = 3;
    }
    else {
      builtin_strncpy(local_60 + local_68,"\\ufff",5);
      cVar5 = 'd';
      lVar8 = 5;
      lVar9 = 6;
    }
    pcVar4[lVar8] = cVar5;
    lVar6 = local_68 + lVar9;
    if ((local_68 + lVar9) - 500U < 0xd) {
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_60);
LAB_140073367:
      bVar3 = 0;
      local_68 = 0;
      lVar8 = 0;
      local_58 = 0;
    }
    else {
LAB_140073392:
      local_58 = lVar6;
      bVar3 = 0;
      lVar8 = 0;
      local_68 = local_58;
    }
  }
  else {
    bVar3 = 0;
    lVar8 = 0;
    local_58 = local_68;
  }
LAB_140073395:
  uVar13 = uVar13 + 1;
  uVar10 = param_2[2];
  if (uVar10 <= uVar13) {
    if (bVar3 == 0) {
      if (local_58 == 0) {
        return;
      }
      plVar7 = (longlong *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
      pcVar4 = local_60;
      lVar8 = local_58;
    }
    else {
code_r0x0001400733fd:
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_60,local_68);
        plVar7 = (longlong *)*param_1;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
        if (local_49 == 0) {
          lVar8 = 3;
          pcVar4 = &DAT_14016e704;
        }
        else {
          lVar8 = 6;
          pcVar4 = "\\ufffd";
        }
      }
      else {
        if (iVar2 != 2) {
          if (iVar2 != 0) {
            return;
          }
          if (0xf < (ulonglong)param_2[3]) {
            param_2 = (undefined8 *)*param_2;
          }
          FUN_140073a44(local_a8,*(undefined1 *)((longlong)param_2 + (uVar10 - 1)));
          FUN_14006acb2(local_88,"incomplete UTF-8 string; last byte: 0x",local_a8);
          FUN_14006bdec(local_100,0x13c,local_88,0);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_100,&DAT_140196700);
        }
        plVar7 = (longlong *)*param_1;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 8);
        pcVar4 = local_60;
        lVar8 = local_68;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001400734ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar7,pcVar4,lVar8);
    return;
  }
  goto code_r0x000140073063;
}

