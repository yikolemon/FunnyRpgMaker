/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015b3b5 */

void FUN_18015b3b5(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  uint in_stack_fffffffffffffed8;
  undefined1 local_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 ***local_70 [2];
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  plVar2 = (longlong *)FUN_1800b8fe8(&DAT_1804189d0,1);
  lVar1 = plVar2[1];
  for (lVar4 = *plVar2; lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
    FUN_180053ab6(local_f8,lVar4 + 0x20);
    in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
    FUN_1800139e8(local_f8,local_d8,0xffffffff,0x20,in_stack_fffffffffffffed8,0);
    FUN_180053ab6(local_e8,lVar4);
    in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
    FUN_1800139e8(local_e8,local_118,0xffffffff,0x20,in_stack_fffffffffffffed8,0);
    local_b8 = "game_automaton.insert({}, {});\n";
    local_b0 = 0x1f;
    FUN_18006b4a7(local_70,&local_b8,local_118,local_d8);
    ppppuVar3 = local_70;
    if (0xf < local_58) {
      ppppuVar3 = (undefined8 ****)local_70[0];
    }
    FUN_180003300(&local_98,ppppuVar3,local_60);
    FUN_180001ef2(local_70);
    FUN_180001ef2(local_118);
    FUN_1800137c6(local_e8);
    FUN_180001ef2(local_d8);
    FUN_1800137c6(local_f8);
  }
  FUN_180018514(local_70,"FUNNY_GAME_TRANSLATION_REGEX",1);
  FUN_180020bbc(local_d8,&DAT_1803818c5,local_70,&local_98,0);
  FUN_180013de7(local_a8,local_d8);
  FUN_1800137c6(local_a8);
  FUN_180001ef2(local_d8);
  FUN_1800185bc(local_70);
  FUN_180001ef2(&local_98);
  return;
}

