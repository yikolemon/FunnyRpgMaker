/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b7124 */

int FUN_1401b7124(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong lVar9;
  
  if (param_2 == (longlong *)0x0) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    iVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_1401ae640();
  }
  else {
    *param_2 = 0;
    lVar6 = *param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar4 = plStack_50, plVar5 = local_58, lVar6 != 0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      lVar6 = FUN_1401c26f0(lVar6,&local_res10);
      if (lVar6 == 0) {
        iVar3 = FUN_1401b750c(*param_1,0,0,&local_58);
        plVar5 = local_58;
        if (iVar3 != 0) {
          plVar4 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1401aea30(*plVar4);
              plVar4 = plVar4 + 1;
            } while (plVar4 != plStack_50);
          }
          goto LAB_1401b7273;
        }
      }
      else {
        iVar3 = FUN_1401b7690(*param_1,lVar6,&local_58);
        plVar5 = local_58;
        if (iVar3 != 0) {
          plVar4 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_1401aea30(*plVar4);
              plVar4 = plVar4 + 1;
            } while (plVar4 != plStack_50);
          }
          goto LAB_1401b7273;
        }
      }
      param_1 = param_1 + 1;
      lVar6 = *param_1;
    }
    lVar6 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    local_res18 = 0;
    for (plVar7 = local_58; plVar7 != plStack_50; plVar7 = plVar7 + 1) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(*plVar7 + lVar2) != '\0');
      local_res18 = local_res18 + 1 + lVar2;
    }
    lVar2 = __acrt_allocate_buffer_for_argv(lVar6,local_res18,1);
    if (lVar2 == 0) {
      FUN_1401aea30(0);
      for (plVar7 = plVar5; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        FUN_1401aea30(*plVar7);
      }
      iVar3 = -1;
LAB_1401b7273:
      FUN_1401aea30(plVar5);
    }
    else {
      lVar6 = lVar2 + lVar6 * 8;
      local_res20 = lVar6;
      if (plVar5 != plVar4) {
        local_res10 = lVar2 - (longlong)plVar5;
        plVar7 = plVar5;
        do {
          lVar8 = -1;
          do {
            lVar9 = lVar8;
            lVar8 = lVar9 + 1;
          } while (*(char *)(*plVar7 + lVar8) != '\0');
          iVar3 = FUN_1401c0870();
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(longlong *)(local_res10 + (longlong)plVar7) = lVar6;
          lVar6 = lVar6 + lVar9 + 2;
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar4);
      }
      *param_2 = lVar2;
      FUN_1401aea30(0);
      for (plVar7 = plVar5; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        FUN_1401aea30(*plVar7);
      }
      FUN_1401aea30(plVar5);
      iVar3 = 0;
    }
  }
  return iVar3;
}

