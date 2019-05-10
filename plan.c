
main();
	init_stuct();
	
	check_param();
		error();
	parser();
	execut();
		md5();
			init_md5_struct();
			padding();
				add_one_bit();
				add_bit_zero();
				fill_with_initial_size();
			algo();
			destroy_md5_struct();
		sha256();
	print();
	clean();


	
	