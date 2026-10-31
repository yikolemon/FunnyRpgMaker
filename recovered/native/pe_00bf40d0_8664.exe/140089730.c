/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140089730 */

void FUN_140089730(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined4 local_68 [2];
  longlong local_60;
  longlong local_58 [6];
  
  lVar5 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_140087320(param_1,0);
  lVar3 = FUN_1400863a0(0x10);
  if (lVar3 != 0) {
    plVar4 = FUN_140086860('\x01');
    *(longlong **)(lVar3 + 8) = plVar4;
    lVar5 = lVar3;
  }
  *(longlong *)(param_1 + 0x40) = lVar5;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar5 = *(longlong *)(lVar5 + 8);
  local_60 = lVar5;
  (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar5);
  plVar4 = FUN_140017641((longlong)local_68);
  uVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(plVar4,0x20);
  if ((lVar5 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar5), lVar5 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar5,1);
  }
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x13;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    uVar2 = *(uint *)(param_1 + 0x10) & *(uint *)(param_1 + 0x14);
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar7 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar7 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar7 = "ios_base::badbit set";
      }
      puVar6 = (undefined8 *)FUN_140086db0(local_68,1);
      FUN_140005de2(local_58,pcVar7,puVar6);
                    /* WARNING: Subroutine does not return */
      FUN_14008c800(local_58,&DAT_140121678);
    }
  }
  if (param_3 != '\0') {
    FUN_140089550(param_1);
  }
  return;
}

