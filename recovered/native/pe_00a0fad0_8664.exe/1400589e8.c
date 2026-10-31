/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400589e8 */

void FUN_1400589e8(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_68 [39];
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_140058be6(&DAT_1401ca010);
  uVar1 = *param_1;
  FUN_140058e64(param_2 + 0x18,local_68);
  FUN_140058bcf(uVar1,local_68);
  FUN_140005242(local_68);
  lVar3 = DAT_1401cc960;
  lVar4 = DAT_1401cc958;
  while( true ) {
    if (lVar4 == lVar3) {
      FUN_14000cc5a(param_2 + 0x10);
      FUN_1400dd970(&DAT_1401ca010);
      return;
    }
    local_41 = 0;
    FUN_140058e64(param_2 + 0x18,local_68);
    plVar2 = *(longlong **)(lVar4 + 0x38);
    if (plVar2 == (longlong *)0x0) break;
    (**(code **)(*plVar2 + 0x10))(plVar2,local_68,&local_41);
    FUN_140005242(local_68);
    lVar4 = lVar4 + 0x40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9e50();
}

